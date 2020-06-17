type route =
  | Home
  | Products
  | ProductDetails(string)
  | NotFound;

let routeFromUrl = (url: ReasonReact.Router.url) =>
  switch (url.path) {
  | [] => Home
  | ["products"] => Products
  | ["products", productId] => ProductDetails(productId)
  | _ => NotFound
  };

let routeToUrl = route =>
  switch (route) {
  | Home => ""
  | Products => "/products"
  | ProductDetails(productId) => "/products/" ++ productId
  | NotFound => "/404"
  };

module Link = {
  [@react.component]
  let make = (~route, ~children) => {
    <a
      href={route->routeToUrl}
      onClick={event => {
        event->ReactEvent.Synthetic.preventDefault;
        ReasonReact.Router.push(route->routeToUrl);
      }}>
      children
    </a>;
  };
};

open Navigation;

module Home = Page_Home;
module Products = Page_Products;
module ProductDetails = Page_ProductDetails;
module NotFound = Page_NotFound;

[@react.component]
let make = () => {
  let route = ReasonReact.Router.useUrl();

  switch (route->routeFromUrl) {
  | Home => <Home />
  | Products => <Products />
  | ProductDetails(productId) => <ProductDetails productId />
  | NotFound => <NotFound />
  };
};
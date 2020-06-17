[@react.component]
let make = (~productId) => {
  <h1> {("Product " ++ productId)->React.string} </h1>;
};

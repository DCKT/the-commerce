open Navigation;

[@react.component]
let make = () => {
  <>
    <h1> "Home"->React.string </h1>
    <Link route=Products> "See products"->React.string </Link>
  </>;
};
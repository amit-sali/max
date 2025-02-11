
//import './App.css'
import "bootstrap/dist/css/bootstrap.min.css";
import FoodItems from "./assets/Components/FoodItems";
import ErrorMessage from "./assets/Components/ErrorMessage";
import Container from "./assets/Components/Container";
function App() {
  // let foodItems = 0;
  let foodItems = ["apple", "banana", "avacado","grapes"];
  return (
    <Container>
      <center>
        <h1>Healthy Food</h1>
        {/* <ErrorMessage/> */}
        <FoodItems items={foodItems}/>
      </center>
    </Container>
  );
}

export default App;

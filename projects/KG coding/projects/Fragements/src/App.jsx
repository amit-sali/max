
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
        <Container>
          <h1>Healthy Food</h1>
        </Container>
        
        {/* <ErrorMessage/> */}
        <FoodItems items={foodItems}/>
      
      
    </Container>
  );
}

export default App;

import { useState } from "react";
import reactLogo from "./assets/react.svg";
import viteLogo from "/vite.svg";
//import './App.css'
import "bootstrap/dist/css/bootstrap.min.css";
import FoodItems from "./assets/Components/FoodItems";
import ErrorMessage from "./assets/Components/ErrorMessage";
function App() {
  // let foodItems = 0;

  return (
    <>
      <center>
        <h1>Healthy Food</h1>
        <ErrorMessage/>
        <FoodItems/>
      </center>
    </>
  );
}

export default App;

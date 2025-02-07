import { useState } from "react";
import reactLogo from "./assets/react.svg";
import viteLogo from "/vite.svg";
import "./App.css";
import AppName from "./Components/AppName";
import AddToDo from "./Components/AddToDo";
import ToDoItem1 from "./Components/ToDoItem1";
import ToDoItem2 from "./Components/ToDoItem2";

function App() {
  return (
    <>
      <center className="to-do container">
        <AppName />
        <div className="container text-center">
          <AddToDo />
          <ToDoItem1 />
          <ToDoItem2/>
        </div>
      </center>
    </>
  );
}

export default App;

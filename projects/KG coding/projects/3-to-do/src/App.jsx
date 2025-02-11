import { useState } from "react";

import "./App.css";
import AppName from "./Components/AppName";
import AddToDo from "./Components/AddToDo";

import TodoItems from "./Components/ToDoItems";

function App() {
  const todoItems = [
    {
      name: "buy milk",
      dueDate: "04/04/2004",
    },
    {
      name: "go college",
      dueDate: "01/05/2005",
    },
  ];

  return (
    <>
      <center className="to-do container">
        <AppName />
        <div className="container text-center">
          <AddToDo />
          <TodoItems todoItems={todoItems} />
        </div>
      </center>
    </>
  );
}

export default App;

import ToDoItem from "./ToDoItem";

const TodoItems = ({ todoItems }) => {

    return <>
        <div className="items-container">
            {
                todoItems.map((item) => {
                    <ToDoItem todoDate={item.dueDate} todoName={item.name} />
                })
            }


        </div>
    </>
}

export default TodoItems;
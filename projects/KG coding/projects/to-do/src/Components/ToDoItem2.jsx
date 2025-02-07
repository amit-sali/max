function ToDoItem2(){

    let todoName = "buy bread ";
    let todoDate = "11/2/1998 ";

    return(
        <>
        <div className="row">
            <div className="col-6">
            {todoName}
            </div>

            <div className="col-4">
              {todoDate}
            </div>

            <div className="col-2">
              <button type="button" className="btn btn-danger">
                delete
              </button>
            </div>
          </div>
        </>
    )
}

export default ToDoItem2;
function ToDoItem1(){

    let todoName = "buy milk ";
    let todoDate = "11/2/2003 ";

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

export default ToDoItem1;
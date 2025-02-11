function AddToDo() {
  return (
    <>
      <div className="row">
        <div className="col-6">
          <input type="text" placeholder="enter to do here"></input>
        </div>

        <div className="col-4">
          <input type="date"></input>
        </div>

        <div className="col-2">
          <button type="button" className="btn btn-success">
            add
          </button>
        </div>
      </div>
    </>
  );
}

export default AddToDo;

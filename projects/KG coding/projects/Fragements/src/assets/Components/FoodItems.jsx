import Item from "./Item";

function FoodItems({items}) {
 

  return (
    <>
      <ul className="list-group">
      {items.map((items)=>(
          <Item key={items} foodItem={items} />
      ))
      }
      </ul>
    </>
  );
}


export default  FoodItems;
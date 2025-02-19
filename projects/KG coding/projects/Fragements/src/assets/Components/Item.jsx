import styles from './Item.module.css'



const Item = ({foodItem}) => {
  return (
    <li  className="list-group-item">
      <span >
        {foodItem}
      </span>
      <button className={StyleSheet.button}>buy</button>
      
    </li>
  );
};


export default Item;

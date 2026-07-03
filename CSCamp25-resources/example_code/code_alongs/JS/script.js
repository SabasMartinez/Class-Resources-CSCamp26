// Sometimes HTML does not load Immediately so it can cause issues with JavaScript
// This is why we use the load event to ensure the HTML is fully loaded before running our script

// The load event triggers when the whole page has loaded, 
// including all dependent resources such as stylesheets and images.
addEventListener("DOMContentLoaded", (event) => {
  // Advanced: Dynamically add a new element
  const newBtn = document.createElement('button');
  // add content to the button
  newBtn.textContent = 'Add List Item';
  // create an unordered list element
  const ul = document.createElement('ul');
  // set an id for the unordered list
  ul.id = 'dynamic-list';
  // add the unordered list to the body of the document
  document.body.appendChild(ul);
  // insert the button before the unordered list
  // first get the unordered list element by its id
  const list = document.getElementById('dynamic-list');
  // then insert the button before the unordered list
  document.body.insertBefore(newBtn, list);
  // add an event listener to the button to add a new list item
  // when the button is clicked
  newBtn.addEventListener('click', function () {
    // create a new list item element
    const li = document.createElement('li');
    // set the text content of the list item
    li.textContent = 'Item ' + (ul.children.length + 1);
    // set the cursor style to pointer
    li.style.cursor = 'pointer';
    // add an event listener to the list item to remove it when clicked
    li.addEventListener('click', function () {
      // remove the list item from the unordered list
      this.remove();
    });
    // append the list item to the unordered list
    ul.appendChild(li);
  });
});

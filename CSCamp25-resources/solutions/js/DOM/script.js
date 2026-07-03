addEventListener('DOMContentLoaded', (event) => {
    // get button by its id
    const btn = document.getElementById('submit');
    // get the input field by its id
    const input = document.getElementById('name');
    btn.addEventListener('click', (event) => {
        // prevent the default action of the button
        event.preventDefault();
        // get the value of the input field
        const name = input.value;
        //get the paragraph element by its id
        const para = document.getElementById('greeting');
        // set the text content of the paragraph element
        para.textContent = `Welcome, ${name}!`;
        // clear the input field
        input.value = '';
    });
});
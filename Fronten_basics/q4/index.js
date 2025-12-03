const inputText = document.getElementById("inputText");
const btn = document.getElementById("btn");
const unorderedList = document.getElementById("unorderedList");

btn.addEventListener('click', ()=>{
    const text = inputText.value;

    if(text !== ''){
        const li = document.createElement("li");
        li.innerText = text;
        unorderedList.appendChild(li);
        localStorage.setItem("text", text);
        inputText.value = '';
    }

    console.log("Saved to localStorage:", {
    text : localStorage.getItem("text")
  });
});


let count = 0;

const counttext = document.querySelector("#count");
const button = document.querySelector("#click-button");

button.addEventListener("click", () => {
    count= count +1;
    counttext.textContent = count;
    console.log("จำนวนคลิก:",count);
});
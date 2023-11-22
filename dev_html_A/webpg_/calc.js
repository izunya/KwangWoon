function calc_p() {
    let a = document.getElementById("inputA1").value
    let b = document.getElementById("inputB1").value
    document.getElementById("valueA1").innerHTML = a;
    document.getElementById("valueB1").innerHTML = b;
    document.getElementById("valueC1").innerHTML = Number(a) + Number(b);
}

function calc_m() {
    let a = document.getElementById("inputA2").value
    let b = document.getElementById("inputB2").value
    document.getElementById("valueA2").innerHTML = a;
    document.getElementById("valueB2").innerHTML = b;
    document.getElementById("valueC2").innerHTML = Number(a) - Number(b);
}

function calc_mut() {
    let a = document.getElementById("inputA3").value
    let b = document.getElementById("inputB3").value
    document.getElementById("valueA3").innerHTML = a;
    document.getElementById("valueB3").innerHTML = b;
    document.getElementById("valueC3").innerHTML = Number(a) * Number(b);
}

function calc_t() {
    let a = document.getElementById("inputA4").value
    let b = document.getElementById("inputB4").value
    document.getElementById("valueA4").innerHTML = a;
    document.getElementById("valueB4").innerHTML = b;
    document.getElementById("valueC4").innerHTML = Number(a) / Number(b);
}
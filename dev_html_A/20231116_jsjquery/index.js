/* 
const H1 = document.querySelector('h1')
const TEXT = document.querySelector('p')

const LISTa = document.querySelectorAll('ul li')

LISTa.item(0).style.color = 'red'
LISTa.item(6).style.color = 'red'


H1.style.backgroundColor = 'red'
TEXT.style.backgroundColor = 'pink'
 */


$(document).ready(function () {
    const H1 = $('h1')
    const TEXT = $('p')

    H1.css('background-color', 'red')
    TEXT.css('background-color', 'pink')

    const BOX = $('.box')
    const LISTa = $('ul li')
    LISTa.eq(0).css({'background-color': 'purple','color': 'white'})
    LISTa.eq(1).css({'background-color': 'green','color': 'black'})
    BOX.siblings('li').css({border:'dashed 1px purple'})
});
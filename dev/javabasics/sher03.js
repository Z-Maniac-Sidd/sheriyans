var c = [1,2,3,4];
var b = c;

b.pop();
console.log(b);
console.log(c);

// reference type is not really anyy CSSPropertyRule, its kjinda like the address of the real one 
// primitives me actual copy hoga, ps anything with no breackets is a primitive

// _______-------------------------------------------------------------

// for(var i = 0; i<=109; i++){
//     console.log(i);
// }
// var a = 12

// while(a<20)
// {
//     a++;
//     console.log(a);
// }

// function abcd() {
//     console.log("hello")
// }

// abcd();
// console.log("qwertyuiop");
// abcd();
// var l = 10;
// function abcde(l) {
//     if (l<15) {
//         console.log(l);
//     }
//     else{
//         console.log("nhi");
//     }
//     l++;
// }

// abcde(l);
// abcde(l);
// abcde(l);
// abcde(l);
// abcde(l);
// abcde(l);

// _______-------------------------------------------------------------

// bllank obj
// var f = {};

// //filled
// var g = {
//     age: 24,
//     name: "Siddharth",
//     contact:8132802530
// }

// var ghadi = {
//     brand : "Kenneth Cole",
//     price : "16k",
//     color : "silver",
//     type : "automatic",
//     digital : false,
//     kuchbolo : function(){}
// }
// ghadi.brand;
// _______-------------------------------------------------------------
function bonk() {
    for (var i = 0; i <12; i++) {
        console.log(i);
    }
    console.log(i);
}
bonk();

// _______-------------------------------------------------------------
// execution context
//1) variables
//2) funtions inside parent fnc
//3) lexical environment of that function
// ye jo container hai isse hi hum execution context kehte hai
// lexical environment
// _______-------------------------------------------------------------
function abcd(){
    var a = 12;
    function def(){
        var b = 12;
    }
}
console.log("nahiii");

// _______-------------------------------------------------------------

//lex env is a kind of chart where its written where our function can acces what information, it cn also be said to be the scope of the function or scope chain

// _______-------------------------------------------------------------

// copy actual value from one var to another

var ab = [1,2,3,4,5];
var bc = [...ab];
bc.pop();

// _______-------------------------------------------------------------

var obj = {name: "harsh"};
var obj1 = {...obj};

// _______-------------------------------------------------------------

// foreach

var t = [1,2,3,4,5,6,7,8,9];
t.forEach(function(val){
    console.log(val+2);

})

// _______-------------------------------------------------------------

// obj pe loop kerne ke liye for inloop

var obc = {
    name: "harsh",
    age: 24,
    city : "bhopal"

}
for(var key in obc){
    console.log(obc[key]);

}

// _______-------------------------------------------------------------

//callback function, runs when job is complete. a type of function

setTimeout(function(){
    console.log("2 sec bad chalo");
}, 2000);

// _______-------------------------------------------------------------

var j = [1,2,3,4];

ytr = {
    0: 1,
    1: 2,
    2: 3,
    3: 4
}


var m = {
    name: "harsh",
    age : 24
}

delete m.age;
// delete m.name;
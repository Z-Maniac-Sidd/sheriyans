// Hihgher order functons!! function which accept other function or return other function
// for each is a higher order function
// var arr = [1,2,3,4,5];
// arr.forEach(function(){})

// ------------------------------------------------------------------------------------------------
// COnstructor function -> normal function jisme "this" ka use ho and aap fnc ko call karte waqt "new" ka use karein
// this point to window
// when you ave to make multiples objects of same properties, use contructor 

// function saachaofbiscuit(){
//     this.width = 12;
//     this.height = 22;
//     this.color = "brown";
//     this.taste = "sugary"; 
// }

// new saachaofbiscuit()


// // new se naya biscuit banega
// var bis1 = new saachaofbiscuit();
// var bis2 = new saachaofbiscuit();


// ------------------------------------------------------------------------------------------------

// First class function
// can use these function as variables....save them, pass them onto other functions
// var abcd = function (){

// }

// ------------------------------------------------------------------------------------------------

// new keyword makes another instance

// ------------------------------------------------------------------------------------------------

//iife -> immediately invoked function expression
    // -> func to turant chalane ki kala, is tareeke se ki hum koi pvt variable bana paye
    // ->the pvt value inside this cannot be easily accesed
    //-> pvt value can only be accesed inside the snippet
    //ans.getter prints the pvt value
    //ans.setter changes value of pvt value
    // kinda acts like a vault

// var ans = (function(){
//     var pvtvalue = 12;
//     return{
//         getter:function(){
//             console.log(pvtvalue);
//         },
//         setter: function(val){
//             pvtvalue = val;
//         }
//     }
// })()   

// ------------------------------------------------------------------------------------------------

//protyping -> a set of extra commands that are prebuild for every var/obj u use

// var human = {
//     cabfly: false,
//     cantalk: true,
//     canwalk: true,
//     haveemotions: true,
//     has4legs: false
// }

// var sher = {
//     canmakewebsite:true,
//     cananimate: true,
//     can1:true,


// }
// sher._proto_ = human;
//sher borrows properties of humans 

// ------------------------------------------------------------------------------------------------

// "this " in global scope 
// what is dsa?
// mathematical or logical model of a particular organization of data  
// like array, linkedlist, graph, tree
// operations:

// traverse
// search
// insert
// delete
// sorting
// merge 

// what is algorithm?
// a finite sequence of instructions which have a clear meaning and can be executed ina finite amoubt of effort and finite amount of time 

// element in an array
// start prog
// declare array and read array
// take element to search for  
// for (int i = 0; i <= n-1; i++)
// {
//     if item = arr{i}
//     return i;
// }
// or item not found
// end 

// why array are better: 
// allow random access to elements. makes accesing them a faster process
// better cache locality
// can represent multiple items of same data type usning single name 
// allows storing multiple data of similar type 
// used ti implement other ds LL, stacks and queues trees graphs and what not


// disadvantages

// fixed size, once memory alloteed to them it cannot be changed
// allocating less memory leads to oss of data as theere is no place for itto store the data  
// homogeneous in nature, so it cannot store multiple data types 
// contigous storage location, deletion and insertion become headache

/*
base address + width of data(number of data points)
lenght = UA-LA +1;

insertion:
set j = n-1
repeat 3 and 4
A[j+1] = A[j];
    j = j-1;
end loop
A[k]  =item  
set n = n+1
exit  

deletion
item = A[k]
j = k 
A[j] = A[j+1]
j = j+1
end loop

linear data structure

elements stored in a linear or sequential order. there are two ways to represent them
by means of seq memory locations
by links

eg array, linked list, stacks
queue

non linear ds
elements are not stored in a sequential order


******************************************************************************************************
traversing an array

set l = lowerbound
repeat 3 and 4 while l< upper bound
a[i]
i++
end looop
exit

******************************************************************************************************
Insert in array

sset upper bound = upper bound +1
set A[upperbound] = val
exit

******************************************************************************************************
insert in middle of array

set i = n;
repeat 3 and 4 while i > position
set A[i+1] = A[i]
i--
n = n+1
a{pos} = val
exit

******************************************************************************************************
searching for an array

set i = lower bound
flag = 0
while i<upper bound
if a{i} == val
    flag = 1;
    pos = i
    break
i++
if flag == 1
    print pos
else
    print not found
exit

******************************************************************************************************
delete from middle

set i = pos
repeat until i<= n-1
a{i} = a{i+1}
i++
n--
ecit
******************************************************************************************************
traversing LL   
initialize ;;
set ptr = start
repeat until ptr -> null
ptr->data
ptr = ptr->next;
exit
******************************************************************************************************

counting nodes

set count = 0
set ptr = start
until ptr != null
ptr = ptr->next
count ++

end

******************************************************************************************************

searching

set ptr = start
repeat until ptr  !=null
if ptr ->data == val
    aet pos = ptr

ptr  =ptr->next

pos = null
******************************************************************************************************

if avail = NULL
    overflow
set new node = avail;
avail = avail ->next
newnode ->data = val;
new node -> next head;
head = new_node;

******************************************************************************************************

insert a end

if avail = null
    overflow
new node = avail
avail = avail->next
new node->data = val
new node ->neext = null

ptr =head
ptr->next != NULL
ptr = ptr->next;;

******************************************************************************************************
insert before a  node

if avail == null
    overflow

new node = avail;
avail = avail->next
new node ->data = val
ptr = head;

preptr = ptr;
repeat until ptr->daat != num;

preptr ->neext = new_node;
new_node ->next = ptr

******************************************************************************************************
delete last node

start = null;
    write underflow
ptr = start;
until ptr !=NULL
    pre ptr = ptr;
    ptr = ptr->next
pre ptr ->next = NULL;
free(ptr)

******************************************************************************************************
delete after a node;

if start = null;
    underflow;

ptr = start;
until ptr ->data == val
    ptr ->













*/
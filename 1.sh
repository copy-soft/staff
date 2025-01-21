variable="outside"
function f {
local variable="inside";
printf "I am $variable with arguments \n";
}
f;
printf "I am $variable \n";

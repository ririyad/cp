//You are given two integers a and b. Print a+b.

fun main() {
    val testCase = readLine()!!.toInt()

    for (l in 1..testCase){
        val(a, b) = readLine()!!.split(" ").map { it.toInt() }
        println(a + b)
    }
}

//https://codeforces.com/contest/1347/problem/B

fun main() {
    val testCase = readLine()!!.toInt()

    for (i in 1..testCase) {
        val (a, b) = readLine()!!.split(" ").map { it.toInt() }.sortedDescending()
        val (c, d) = readLine()!!.split(" ").map { it.toInt() }.sortedDescending()

        if (a == c && b + d == a)
            println("YES")
        else
            println("NO")
    }
}v

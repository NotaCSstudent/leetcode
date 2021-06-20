   pub fn fizz_buzz(n: i32) -> Vec<String> {
        let to_fizz_buzz = |x: i32| {
            if x % 15 == 0 {
                String::from("FizzBuzz")
            } else if x % 3 == 0 {
                String::from("Fizz")
            } else if x % 5 == 0 {
                String::from("Buzz")
            } else {
                x.to_string()
            }
        };
        
        (1..n + 1).map(to_fizz_buzz).collect()
    }

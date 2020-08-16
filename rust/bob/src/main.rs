use bob;

fn main() {
    let message = " Asd asd qwe qwZ ";
    let message = message.trim();

    let last = message.chars().rev().nth(0);
    let is_question = last == Some('?');
    println!("is_question[{}]", is_question);
    let is_question = message.ends_with("?");
    println!("is_question[{}]", is_question);
}

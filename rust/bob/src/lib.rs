pub fn reply(message: &str) -> &str {
    let message = message.trim();

	let is_empty = message.is_empty();
    let is_question = message.ends_with('?');
    let has_letter = message.chars().any(|x| x.is_alphabetic());
    let all_uppercase = message.to_uppercase() == message;
    let is_yell = has_letter && all_uppercase;

    match (is_empty, is_question, is_yell) {
        (true, _, _) => "Fine. Be that way!",
        (false, true, true) => "Calm down, I know what I'm doing!",
        (false, true, _) => "Sure.",
        (false, false, true) => "Whoa, chill out!",
        (false, false, false) => "Whatever.",
    }
}

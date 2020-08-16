pub fn build_proverb(list: &[&str]) -> String {
    let mut ret = "".to_string();
    if list.len() == 0 {
        return ret;
    }
    let first: &str = list[0];

    for (i, w) in list.windows(2).enumerate() {
        let new = format!("For want of a {} the {} was lost.", w[0], w[1]);
        if i == 0 {
            ret = new;
        } else {
            ret = format!("{}\n{}", ret, new);
        }
    }

    let last = format!("And all for the want of a {}.", first);
    if ret == "" {
        last
    } else {
        format!("{}\n{}", ret, last)
    }
}

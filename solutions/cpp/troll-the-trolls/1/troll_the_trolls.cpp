namespace hellmath {


    enum class AccountStatus {
    mod,
    user,
    guest,
    troll
};
    enum class Action {
    read,
    write,
    remove
};
    bool permission(AccountStatus acc, Action act) {
        switch(acc) {
            case AccountStatus::mod:
                return true;
            case AccountStatus::user:
            case AccountStatus::troll:
                return act == Action::read || act == Action::write;
            case AccountStatus::guest:
                return act == Action::read;
                    }
        return false;
    }
    bool display_post(AccountStatus poster, AccountStatus viewer) {
        if(poster == AccountStatus::troll) {
            return viewer == AccountStatus::troll;
        }
        return true;
    }
    bool permission_check(Action act, AccountStatus acc) {
        return permission(acc, act);
    }
    bool valid_player_combination(AccountStatus player1, AccountStatus player2) {
        if(player1 == AccountStatus::guest || player2 == AccountStatus::guest) {
            return false;
        }
        if(player1 == AccountStatus::troll || player2 == AccountStatus::troll) {
            return player1 == AccountStatus::troll && player2 == AccountStatus::troll;
        }
        return true;
    }
    int get_priority(AccountStatus acc) {
        switch(acc) {
            case AccountStatus::troll: return 0;
            case AccountStatus::guest: return 1;
            case AccountStatus::user: return 2;
            case AccountStatus::mod: return 3;
        }
        return -1;
    }
    bool has_priority(AccountStatus player1, AccountStatus player2) {
        return get_priority(player1) > get_priority(player2);
    }



}  // namespace hellmath

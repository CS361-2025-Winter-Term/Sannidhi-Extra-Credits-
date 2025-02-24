class AuthenticationManager {
    private:
        std::string hashedPassword;   // To store the hashed password
    public:
        bool validateUsername(const std::string& username);
        bool validatePassword(const std::string& password);
        bool validateEmail(const std::string& email);
        std::string hashPassword(const std::string& password);
        void saveNewUser(UserProfile userProfile, std::string password);
};
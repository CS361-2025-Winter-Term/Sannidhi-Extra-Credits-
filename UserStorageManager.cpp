class UserStorageManager {
    private:
    std::string databaseConnection;

    public:
        //constructor 
        UserStorageManager();
        bool findUserByUsername(const std::string& username);
        bool saveUserToDatabase(UserProfile userProfile);
};
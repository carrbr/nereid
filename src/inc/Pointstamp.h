class Pointstamp {
    public:
        Pointstamp() {}
        ~Pointstamp() {}
        getTimeStamp();
        setTimeStamp();
        getLocation();
        setLocation();
    private:
        Timestamp timestamp;
        GraphComponent location;
};

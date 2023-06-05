enum State{FIGHT, ESCAPE, IDLE, PATROL};
class point{};
class strategy{
        public:
                virtual int recalc_strategy(point, float)=0;
        protected:
                strategy(){};
};
class fightstrategy:public strategy{
        public:
                //strategy();
                virtual int recalc_strategy(point, float){};

};
class idlestrategy: public strategy{
        public:
                idlestrategy(){};
                virtual int recalc_strategy(point, float){};

};

void recalc_fight(){};
void recalc_escape(){};
void recalc_idle(){};
void recalc_patrol(){};


void recalc_AI(State state)
{
	switch (state)
	{
	case FIGHT: recalc_fight();break;
	case ESCAPE: recalc_escape();break;
	case IDLE: recalc_idle();break;
	case PATROL: recalc_patrol();break;
	}

}
class soldier{
	public:
	soldier(strategy *);
	void recalc_AI();
	void change_strategy(strategy *);
	private:
	point pos;
	float yaw;
	strategy* thestrategy;
};
soldier::soldier(strategy* stra)
{thestrategy=stra;}
void soldier::recalc_AI()
{thestrategy->recalc_strategy(pos, yaw);}
void soldier::change_strategy(strategy *stra)
{thestrategy=stra;}
/*class strategy{
	public:
		virtual int recalc_strategy(point, float)=0;
	protected:
		strategy();
};
class fightstrategy:public strategy{
	public:
		strategy();
		virtual int recalc_strategy(point, float){};

};
class idlestrategy: public strategy{
	public:
		strategy();
		virtual int recalc_strategy(point, float){};

};*/
int main(){



soldier* soldier1= new soldier(new idlestrategy);





return 0;
}

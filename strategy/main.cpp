enum State{FIGHT, ESCAPE, IDLE, PATROL};
class point{};

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
	soldier(strategy);
	void recalc_AI();
	void change_strategy(strategy*);
	private:
	point pos;
	float yaw;
	strategy* thestrategy;
};
solder::solder(strategy* stra)
{thestrategy=stra;}
void soldier::recalc_AI()
{thestrategy->recalcstrategy(pos, yaw);}
void soldier::changestrategy(strategy *stra)
{thestrategy=stra;}
class strategy{
	public:
		virtual int recalc_strategy(point, float)=0;
	protected:
		strategy();
};
class fightstrategy:public strategy{
	public:
		strategy();
		virtual int recalcstrategy(point, float){};

};
class idlestrategy: public strategy{
	public:
		strategy();
		virtual int recalcstrategy(point, float){};

};
int main(){



soldier* soldier1= new soldier(new idlestrategy);





return 0;
}

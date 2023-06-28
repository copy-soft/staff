class point{};
class strategy{
        public:
                virtual int recalc_strategy(point, float)=0;
        protected:
                strategy(){};
};
class fightstrategy:public strategy{
        public:
                fightstrategy(){};
                virtual int recalc_strategy(point, float){return 0;};

};
class idlestrategy: public strategy{
        public:
                idlestrategy(){};
                virtual int recalc_strategy(point, float){return 0;};

};

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
int main(){



soldier* soldier1= new soldier(new idlestrategy);

soldier1->recalc_AI();

soldier1->change_strategy(new fightstrategy);

soldier1->recalc_AI();



return 0;
}

struct jedan_covjek{
    int ai,bi,ci,di,ei,datum;
    char ime[20],prezime[20],spol[1];
    jedan_covjek*next;
};

struct queue{
	jedan_covjek*front,*rear;
};

void init(queue*q){
	jedan_covjek*glava=new jedan_covjek;
	q->rear=glava;
	q->front=glava;
}

int empty(queue*q){
	if(q->rear==q->front)return 1;
	else return 0;
}

void enQueue(queue*q,jedan_covjek*novi_covjek){
	jedan_covjek*novi=new jedan_covjek;
	novi=novi_covjek;
	q->rear->next=novi;
	q->rear=novi;
	novi->next=NULL;
}

void deQueue(queue*q){
	jedan_covjek*brisani_element=q->front;
	q->front=brisani_element->next;
	delete brisani_element;
}

jedan_covjek*frontQueue(queue*q){
	return q->front->next;
}


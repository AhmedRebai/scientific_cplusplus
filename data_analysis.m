%% To contact the authors : Ahmed REBAI ahmed.rebai2@gmail.com                                                                                        
%% and Mohamed TALBI mohamedtalbi.chem@gmail.com   

%% data structure
%% t x y vx vy 

data = load('results.txt');
subplot(2,2,1);
plot(data(:,1),data(:,2))
xlabel('t (s)','FontSize',20,'FontWeight','bold')
ylabel('x (m)','FontSize',20,'FontWeight','bold')
subplot(2,2,2);
plot(data(:,1),data(:,3))    
xlabel('t (s)','FontSize',20,'FontWeight','bold')
ylabel('y (m)','FontSize',20,'FontWeight','bold')
subplot(2,2,3);
plot(data(:,1),data(:,4))
xlabel('t (s)','FontSize',20,'FontWeight','bold')
ylabel('vx (m/s)','FontSize',20,'FontWeight','bold')
subplot(2,2,4);
plot(data(:,1),data(:,5))
xlabel('t (s)','FontSize',20,'FontWeight','bold')
ylabel('vy (m/s)','FontSize',20,'FontWeight','bold')

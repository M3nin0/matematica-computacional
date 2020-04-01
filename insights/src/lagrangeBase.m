function y = lagrangeBase(x,pointx,pointy)
% Carlo Castoldi (2020). Lagrange polynomial interpolation 
% (https://www.mathworks.com/matlabcentral/fileexchange/899-lagrange-polynomial-interpolation), 
% MATLAB Central File Exchange. Retrieved April 1, 2020. 
% LAGRANGE   approx a point-defined function using the Lagrange polynomial interpolation
%
%      LAGRANGE(X,POINTX,POINTY) approx the function definited by the points:
%      P1=(POINTX(1),POINTY(1)), P2=(POINTX(2),POINTY(2)), ..., PN(POINTX(N),POINTY(N))
%      and calculate it in each elements of X
%
%      If POINTX and POINTY have different number of elements the function will return the NaN value
%
%      function wrote by: Calzino
%      7-oct-2001
%
n=size(pointx,2);
L=ones(n,size(x,2));
if (size(pointx,2)~=size(pointy,2))
   fprintf(1,'\nERROR!\nPOINTX and POINTY must have the same number of elements\n');
   y=NaN;
else
   for i=1:n
      for j=1:n
         if (i~=j)
            L(i,:)=L(i,:).*(x-pointx(j))/(pointx(i)-pointx(j));
         endif
      endfor
   endfor
   y=0;
   for i=1:n
      y=y+pointy(i)*L(i,:);
   endfor
endif
endfunction
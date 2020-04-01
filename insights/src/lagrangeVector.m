function result = lagrangeVector(vec, pointx, pointy)
    result = [];
    for i=vec
        result = [result lagrangeBase(i, pointx, pointy)];
    endfor
endfunction
/* This file is auto-generated. Do not edit by hand.

Last generated: 2021-01-20 16:12:01.953246 */

static const size_t pgm_saddle_tabsize = 89;
static const double pgm_saddle_max_z = 3.555555555555556;

static const double pgm_z[] = {
    0.000000000, 0.040404040, 0.080808081, 0.121212121, 0.161616162,
    0.202020202, 0.242424242, 0.282828283, 0.323232323, 0.363636364,
    0.404040404, 0.444444444, 0.484848485, 0.525252525, 0.565656566,
    0.606060606, 0.646464646, 0.686868687, 0.727272727, 0.767676768,
    0.808080808, 0.848484848, 0.888888889, 0.929292929, 0.969696970,
    1.010101010, 1.050505051, 1.090909091, 1.131313131, 1.171717172,
    1.212121212, 1.252525253, 1.292929293, 1.333333333, 1.373737374,
    1.414141414, 1.454545455, 1.494949495, 1.535353535, 1.575757576,
    1.616161616, 1.656565657, 1.696969697, 1.737373737, 1.777777778,
    1.818181818, 1.858585859, 1.898989899, 1.939393939, 1.979797980,
    2.020202020, 2.060606061, 2.101010101, 2.141414141, 2.181818182,
    2.222222222, 2.262626263, 2.303030303, 2.343434343, 2.383838384,
    2.424242424, 2.464646465, 2.505050505, 2.545454545, 2.585858586,
    2.626262626, 2.666666667, 2.707070707, 2.747474747, 2.787878788,
    2.828282828, 2.868686869, 2.909090909, 2.949494949, 2.989898990,
    3.030303030, 3.070707071, 3.111111111, 3.151515152, 3.191919192,
    3.232323232, 3.272727273, 3.313131313, 3.353535354, 3.393939394,
    3.434343434, 3.474747475, 3.515151515, 3.555555556
};


static const double pgm_xl[] = {
    1.000000000, 0.999456193, 0.997829022, 0.995131153, 0.991383420,
    0.986614421, 0.980859977, 0.974162457, 0.966570024, 0.958135784,
    0.948916908, 0.938973713, 0.928368760, 0.917165970, 0.905429785,
    0.893224391, 0.880613012, 0.867657289, 0.854416745, 0.840948337,
    0.827306096, 0.813540857, 0.799700061, 0.785827637, 0.771963939,
    0.758145756, 0.744406353, 0.730775566, 0.717279927, 0.703942807,
    0.690784591, 0.677822855, 0.665072561, 0.652546246, 0.640254219,
    0.628204750, 0.616404261, 0.604857497, 0.593567706, 0.582536792,
    0.571765469, 0.561253402, 0.550999337, 0.541001219, 0.531256303,
    0.521761255, 0.512512237, 0.503504995, 0.494734928, 0.486197154,
    0.477886571, 0.469797906, 0.461925761, 0.454264655, 0.446809056,
    0.439553415, 0.432492192, 0.425619875, 0.418931005, 0.412420189,
    0.406082113, 0.399911560, 0.393903410, 0.388052654, 0.382354402,
    0.376803878, 0.371396435, 0.366127550, 0.360992827, 0.355987999,
    0.351108925, 0.346351593, 0.341712117, 0.337186735, 0.332771807,
    0.328463813, 0.324259352, 0.320155137, 0.316147994, 0.312234858,
    0.308412770, 0.304678874, 0.301030415, 0.297464735, 0.293979270,
    0.290571545, 0.287239175, 0.283979860, 0.280791381
};


static const double pgm_xc[] = {
    1.307724610, 1.307115180, 1.305291598, 1.302267896, 1.298067159,
    1.292721079, 1.286269360, 1.278758985, 1.270243375, 1.260781463,
    1.250436721, 1.239276154, 1.227369299, 1.214787253, 1.201601741,
    1.187884258, 1.173705289, 1.159133609, 1.144235692, 1.129075208,
    1.113712617, 1.098204862, 1.082605142, 1.066962774, 1.051323116,
    1.035727568, 1.020213611, 1.004814911, 0.989561438, 0.974479636,
    0.959592600, 0.944920275, 0.930479666, 0.916285044, 0.902348171,
    0.888678500, 0.875283388, 0.862168293, 0.849336965, 0.836791625,
    0.824533131, 0.812561143, 0.800874264, 0.789470177, 0.778345767,
    0.767497239, 0.756920216, 0.746609833, 0.736560826, 0.726767599,
    0.717224299, 0.707924871, 0.698863114, 0.690032726, 0.681427346,
    0.673040592, 0.664866087, 0.656897493, 0.649128528, 0.641552990,
    0.634164772, 0.626957877, 0.619926429, 0.613064682, 0.606367028,
    0.599828004, 0.593442295, 0.587204738, 0.581110322, 0.575154192,
    0.569331647, 0.563638141, 0.558069279, 0.552620818, 0.547288664,
    0.542068868, 0.536957626, 0.531951273, 0.527046280, 0.522239253,
    0.517526926, 0.512906158, 0.508373933, 0.503927350, 0.499563623,
    0.495280077, 0.491074143, 0.486943354, 0.482885344
};


static const double pgm_xr[] = {
    2.000000000, 1.998912386, 1.995658043, 1.990262305, 1.982766839,
    1.973228843, 1.961719953, 1.948324915, 1.933140048, 1.916271569,
    1.897833816, 1.877947425, 1.856737520, 1.834331940, 1.810859571,
    1.786448782, 1.761226024, 1.735314578, 1.708833491, 1.681896674,
    1.654612192, 1.627081714, 1.599400123, 1.571655273, 1.543927878,
    1.516291511, 1.488812705, 1.461551133, 1.434559854, 1.407885614,
    1.381569181, 1.355645711, 1.330145123, 1.305092493, 1.280508438,
    1.256409500, 1.232808521, 1.209714995, 1.187135413, 1.165073584,
    1.143530937, 1.122506803, 1.101998673, 1.082002437, 1.062512607,
    1.043522510, 1.025024475, 1.007009990, 0.989469856, 0.972394308,
    0.955773143, 0.939595812, 0.923851522, 0.908529309, 0.893618112,
    0.879106830, 0.864984383, 0.851239750, 0.837862010, 0.824840377,
    0.812164227, 0.799823120, 0.787806819, 0.776105309, 0.764708803,
    0.753607756, 0.742792871, 0.732255100, 0.721985654, 0.711975997,
    0.702217850, 0.692703186, 0.683424234, 0.674373470, 0.665543613,
    0.656927626, 0.648518704, 0.640310274, 0.632295988, 0.624469716,
    0.616825539, 0.609357748, 0.602060830, 0.594929470, 0.587958539,
    0.581143090, 0.574478351, 0.567959721, 0.561582762
};


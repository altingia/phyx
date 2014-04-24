/*
 * BranchSegment.h
 *
 *  Created on: Aug 16, 2009
 *      Author: smitty
 */

#ifndef BRANCHSEGMENT_H_
#define BRANCHSEGMENT_H_

#include <vector>
using namespace std;

#include "rate_model.h"

#include "vector_node_object.h"
#include "superdouble.h"

class BranchSegment{
private:
    double duration;
    int period;
    RateModel * model;
    vector<int> fossilareaindices;
    int startdistint;
    
public:
    BranchSegment(double dur,int per);
    void setModel(RateModel * mod);
    //void setStartDist(vector<int> sd);
    void clearStartDist();
    double getDuration();
    int getPeriod();
    //vector<int> getStartDist();
    void set_start_dist_int(int d);
    int get_start_dist_int();
    RateModel * getModel();
    vector<int> getFossilAreas();
    void setFossilArea(int area);
    vector<Superdouble> * distconds;
    vector<Superdouble> alphas; // alpha for the entire branch -- stored in the 0th segment for anc calc
    vector<Superdouble> seg_sp_alphas; // alpha for this specific segment, stored for the stoch map
    vector<Superdouble> seg_sp_stoch_map_revB_time; //segment specific rev B, combining the tempA and the ENLT
    vector<Superdouble> seg_sp_stoch_map_revB_number; //segment specific rev B, combining the tempA and the ENLT
    vector<Superdouble> * ancdistconds;//for ancestral state reconstructions
};

#endif /* BRANCHSEGMENT_H_ */

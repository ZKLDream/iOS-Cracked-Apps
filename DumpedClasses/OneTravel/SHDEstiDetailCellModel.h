//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEOperationCellModel.h"

@class SDDJCityEstimateModel;

@interface SHDEstiDetailCellModel : ONEOperationCellModel
{
    SDDJCityEstimateModel *_detailModel;
    CDUnknownBlockType _ruleBtnBlock;
    double _cellHeight;
}

@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(copy, nonatomic) CDUnknownBlockType ruleBtnBlock; // @synthesize ruleBtnBlock=_ruleBtnBlock;
@property(retain, nonatomic) SDDJCityEstimateModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (double)heightForCell;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelBaseCacheBean.h"

@class CTHotelFilterRootNode, CTHotelMainLabelingViewModel, HotelCommentUsefulPushInformationModel, HotelNearByTourInfo, HotelSeniorFilterModel, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface CTHotelInquireMainCacheBean : CTHotelBaseCacheBean
{
    _Bool _isFromLocation;
    _Bool _isFromPositionLocation;
    _Bool _browseHitstoryServiceSend;
    _Bool _favorInServiceSend;
    _Bool _favorInCity;
    _Bool _bViewBeforeDawn;
    _Bool _isBeforeDownTabChanged;
    int _sortType;
    int _enterType;
    HotelSeniorFilterModel *_filterModel;
    long long _waitCommentCount;
    HotelCommentUsefulPushInformationModel *_commentUsefulPushInfoModel;
    long long _orderTotal;
    NSMutableArray *_orderSummaryList;
    CTHotelFilterRootNode *_priceAndStarRootNode;
    CTHotelMainLabelingViewModel *_labelingViewModel;
    NSMutableArray *_businessHotZoneList;
    NSMutableArray *_themeList;
    long long _selectTab;
    NSArray *_browseHistoryList;
    NSMutableArray *_favorInfoList;
    NSMutableArray *_overseasHotDesInfoList;
    HotelNearByTourInfo *_nearByInfo;
    long long _customerType;
    NSString *_userCopounTips;
    NSMutableDictionary *_userCopounTipsDic;
    struct CLLocationCoordinate2D _listFilterCoord;
}

@property(retain, nonatomic) NSMutableDictionary *userCopounTipsDic; // @synthesize userCopounTipsDic=_userCopounTipsDic;
@property(retain, nonatomic) NSString *userCopounTips; // @synthesize userCopounTips=_userCopounTips;
@property(nonatomic) _Bool isBeforeDownTabChanged; // @synthesize isBeforeDownTabChanged=_isBeforeDownTabChanged;
@property(nonatomic) struct CLLocationCoordinate2D listFilterCoord; // @synthesize listFilterCoord=_listFilterCoord;
@property(nonatomic) long long customerType; // @synthesize customerType=_customerType;
@property(retain, nonatomic) HotelNearByTourInfo *nearByInfo; // @synthesize nearByInfo=_nearByInfo;
@property(nonatomic) _Bool bViewBeforeDawn; // @synthesize bViewBeforeDawn=_bViewBeforeDawn;
@property(retain, nonatomic) NSMutableArray *overseasHotDesInfoList; // @synthesize overseasHotDesInfoList=_overseasHotDesInfoList;
@property(nonatomic) _Bool favorInCity; // @synthesize favorInCity=_favorInCity;
@property(nonatomic) _Bool favorInServiceSend; // @synthesize favorInServiceSend=_favorInServiceSend;
@property(retain) NSMutableArray *favorInfoList; // @synthesize favorInfoList=_favorInfoList;
@property(nonatomic) _Bool browseHitstoryServiceSend; // @synthesize browseHitstoryServiceSend=_browseHitstoryServiceSend;
@property(retain, nonatomic) NSArray *browseHistoryList; // @synthesize browseHistoryList=_browseHistoryList;
@property(nonatomic) long long selectTab; // @synthesize selectTab=_selectTab;
@property(nonatomic) _Bool isFromPositionLocation; // @synthesize isFromPositionLocation=_isFromPositionLocation;
@property(retain, nonatomic) NSMutableArray *themeList; // @synthesize themeList=_themeList;
@property(nonatomic) _Bool isFromLocation; // @synthesize isFromLocation=_isFromLocation;
@property(retain, nonatomic) NSMutableArray *businessHotZoneList; // @synthesize businessHotZoneList=_businessHotZoneList;
@property(retain, nonatomic) CTHotelMainLabelingViewModel *labelingViewModel; // @synthesize labelingViewModel=_labelingViewModel;
@property(retain, nonatomic) CTHotelFilterRootNode *priceAndStarRootNode; // @synthesize priceAndStarRootNode=_priceAndStarRootNode;
@property(retain, nonatomic) NSMutableArray *orderSummaryList; // @synthesize orderSummaryList=_orderSummaryList;
@property(nonatomic) long long orderTotal; // @synthesize orderTotal=_orderTotal;
@property(retain, nonatomic) HotelCommentUsefulPushInformationModel *commentUsefulPushInfoModel; // @synthesize commentUsefulPushInfoModel=_commentUsefulPushInfoModel;
@property(nonatomic) long long waitCommentCount; // @synthesize waitCommentCount=_waitCommentCount;
@property(nonatomic) int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) int sortType; // @synthesize sortType=_sortType;
@property(copy, nonatomic) HotelSeniorFilterModel *filterModel; // @synthesize filterModel=_filterModel;
- (void).cxx_destruct;
- (id)makeUrl:(id)arg1;
- (id)getFilterPriceStarList:(id)arg1;
- (id)getFilterPriceStar:(id)arg1;
- (_Bool)getPriceBool:(id)arg1;
- (void)addModel:(id)arg1 jsonStr:(id)arg2;
- (id)getRealKeyModelList:(id)arg1;
- (id)saveToRecordEmptyKeyWord:(_Bool)arg1;
- (id)getSaveInfo:(id)arg1 value:(id)arg2 isOverSeas:(_Bool)arg3;
- (_Bool)isShowRedPacket;
- (void)changeLocationTypeBefore60:(id)arg1;
- (void)setMixedFilterModelBefore60:(id)arg1 tag_key_str:(id)arg2 key_str:(id)arg3;
- (void)putTagAndValue:(id)arg1 seniorFilterModel:(id)arg2 key_str:(id)arg3;
- (_Bool)isValidModel:(id)arg1;
- (void)addAllBrandType:(id)arg1 selectBrandList:(id)arg2;
- (void)getRecordAultChildrenFitlerData:(id)arg1 filterModel:(id)arg2;
- (void)getRecordOfPriceStar:(id)arg1 filterModel:(id)arg2;
- (void)getNoRecord:(id)arg1;
- (void)handleSpecialLocationInfo:(id)arg1 locationModel:(id)arg2;
- (void)getRecordOfLocationData:(id)arg1 filterModel:(id)arg2 tempModelList:(id)arg3;
- (void)getRecordOfBrandData:(id)arg1 filterModel:(id)arg2 tempModelList:(id)arg3;
- (void)getRecordOfKeywordData:(id)arg1 filterModel:(id)arg2;
- (void)handleIncrement;
- (id)getAllRecordData:(_Bool)arg1;
- (void)saveAllRecordData:(int)arg1 isOverSeas:(_Bool)arg2;
- (id)saveAultChildrenFilterData:(_Bool)arg1;
- (id)saveToConditionList:(_Bool)arg1;
- (id)saveToRecordByKeyword:(_Bool)arg1;
- (id)saveToRecordByPriceStar:(_Bool)arg1;
- (id)saveToRecordByNightCount:(int)arg1 isOverSeas:(_Bool)arg2;
- (id)saveToRecordByCheckInDate:(_Bool)arg1;
- (id)saveToRecordByCity:(_Bool)arg1;
- (_Bool)destructionDataValue:(id)arg1;
- (void)goToHotelListNearbyHotel:(id)arg1;
- (void)goToHotelListFromInquire:(id)arg1;
- (void)save:(id)arg1 nextCacheBean:(id)arg2;
- (_Bool)isShowBeforeDawn;
- (void)initCache;

@end


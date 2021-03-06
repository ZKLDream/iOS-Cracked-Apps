//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class AnalysisTravelViewModel, BrowseHistoryInformationModel, CTSReddotHandle, CTSTravelRemindModel, NSArray, NSMutableArray, NSString, ParsedHotelInformationModel, ParsedMemoModel, ShoppingCouponInformationModel, TravelCardLocationViewModel;

@interface CTMyTravelListCacheBean : CTCacheBean
{
    _Bool _isNewLogin;
    _Bool _needRefreshScheduleList;
    _Bool _hasDoRecommendAnimation;
    int _analyMessageResult;
    int _maxRecommendRqCount;
    NSString *_timeLineToken;
    NSString *_lastTimeLineToken;
    NSString *_lastUserActionListSendTime;
    TravelCardLocationViewModel *_travelCardLocation;
    long long _newAddCardSmartTripId;
    AnalysisTravelViewModel *_analysisFromUrl;
    ParsedMemoModel *_analyMemoInfo;
    ParsedHotelInformationModel *_parsedHotelModel;
    NSMutableArray *_analysisTravelInfoList;
    NSString *_analysisAddReuslt;
    NSMutableArray *_cardGroupList;
    NSMutableArray *_cardList;
    NSMutableArray *_confictModelList;
    NSMutableArray *_tripRangeList;
    NSString *_nearestCardDate;
    NSMutableArray *_timeLineRecommendList;
    ShoppingCouponInformationModel *_couponModel;
    CTSTravelRemindModel *_travelRemindModel;
    NSString *_deleteErrorMessage;
    NSArray *_orderNotifyList;
    BrowseHistoryInformationModel *_browseHistoryModel;
    NSArray *_favoriteNotifyList;
    NSArray *_flightVarNotifyList;
    NSString *_pocketPushMessage;
    NSMutableArray *_redDotCache;
    CTSReddotHandle *_redHandleModel;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
@property(retain, nonatomic) CTSReddotHandle *redHandleModel; // @synthesize redHandleModel=_redHandleModel;
@property(retain, nonatomic) NSMutableArray *redDotCache; // @synthesize redDotCache=_redDotCache;
@property(copy, nonatomic) NSString *pocketPushMessage; // @synthesize pocketPushMessage=_pocketPushMessage;
@property(retain, nonatomic) NSArray *flightVarNotifyList; // @synthesize flightVarNotifyList=_flightVarNotifyList;
@property(retain, nonatomic) NSArray *favoriteNotifyList; // @synthesize favoriteNotifyList=_favoriteNotifyList;
@property(retain, nonatomic) BrowseHistoryInformationModel *browseHistoryModel; // @synthesize browseHistoryModel=_browseHistoryModel;
@property(retain, nonatomic) NSArray *orderNotifyList; // @synthesize orderNotifyList=_orderNotifyList;
@property(copy, nonatomic) NSString *deleteErrorMessage; // @synthesize deleteErrorMessage=_deleteErrorMessage;
@property(retain, nonatomic) CTSTravelRemindModel *travelRemindModel; // @synthesize travelRemindModel=_travelRemindModel;
@property(nonatomic) _Bool hasDoRecommendAnimation; // @synthesize hasDoRecommendAnimation=_hasDoRecommendAnimation;
@property(retain, nonatomic) ShoppingCouponInformationModel *couponModel; // @synthesize couponModel=_couponModel;
@property(retain, nonatomic) NSMutableArray *timeLineRecommendList; // @synthesize timeLineRecommendList=_timeLineRecommendList;
@property(copy, nonatomic) NSString *nearestCardDate; // @synthesize nearestCardDate=_nearestCardDate;
@property(nonatomic) _Bool needRefreshScheduleList; // @synthesize needRefreshScheduleList=_needRefreshScheduleList;
@property(nonatomic) _Bool isNewLogin; // @synthesize isNewLogin=_isNewLogin;
@property(retain, nonatomic) NSMutableArray *tripRangeList; // @synthesize tripRangeList=_tripRangeList;
@property(retain, nonatomic) NSMutableArray *confictModelList; // @synthesize confictModelList=_confictModelList;
@property(nonatomic) int maxRecommendRqCount; // @synthesize maxRecommendRqCount=_maxRecommendRqCount;
@property(retain, nonatomic) NSMutableArray *cardList; // @synthesize cardList=_cardList;
@property(retain) NSMutableArray *cardGroupList; // @synthesize cardGroupList=_cardGroupList;
@property(copy, nonatomic) NSString *analysisAddReuslt; // @synthesize analysisAddReuslt=_analysisAddReuslt;
@property(retain) NSMutableArray *analysisTravelInfoList; // @synthesize analysisTravelInfoList=_analysisTravelInfoList;
@property(retain, nonatomic) ParsedHotelInformationModel *parsedHotelModel; // @synthesize parsedHotelModel=_parsedHotelModel;
@property(retain, nonatomic) ParsedMemoModel *analyMemoInfo; // @synthesize analyMemoInfo=_analyMemoInfo;
@property(nonatomic) int analyMessageResult; // @synthesize analyMessageResult=_analyMessageResult;
@property(retain, nonatomic) AnalysisTravelViewModel *analysisFromUrl; // @synthesize analysisFromUrl=_analysisFromUrl;
@property long long newAddCardSmartTripId; // @synthesize newAddCardSmartTripId=_newAddCardSmartTripId;
@property(retain) TravelCardLocationViewModel *travelCardLocation; // @synthesize travelCardLocation=_travelCardLocation;
@property(copy, nonatomic) NSString *lastUserActionListSendTime; // @synthesize lastUserActionListSendTime=_lastUserActionListSendTime;
@property(copy, nonatomic) NSString *lastTimeLineToken; // @synthesize lastTimeLineToken=_lastTimeLineToken;
@property(copy, nonatomic) NSString *timeLineToken; // @synthesize timeLineToken=_timeLineToken;
- (void).cxx_destruct;
- (id)orderCardList;
- (id)getCardModelBySmartTripId:(long long)arg1;
- (id)getSameDayCardList:(id)arg1;
- (_Bool)isTiemeLineChange;
- (void)deleteCardWithSmartTripId:(long long)arg1;
- (_Bool)hasFilterCondition;
- (id)getShowUserActionList;
- (id)currentPassengerList;
- (void)initCache;

@end


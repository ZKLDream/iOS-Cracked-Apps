//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFViewModelObject.h"

@class KTVChorusListHttpDAO, KTVChorusListNetHelper, KTVOpusInfo, NSMutableArray;

@interface KTVOpusListForChorusAccVM : KFViewModelObject
{
    _Bool _isAcceptReqesting;
    int _pageNo;
    KTVOpusInfo *_baseOpusInfo;
    KTVChorusListNetHelper *_netHelper;
    KTVChorusListHttpDAO *_httpDao;
    NSMutableArray *_chorusAccListArr;
}

@property(retain, nonatomic) NSMutableArray *chorusAccListArr; // @synthesize chorusAccListArr=_chorusAccListArr;
@property(retain, nonatomic) KTVChorusListHttpDAO *httpDao; // @synthesize httpDao=_httpDao;
@property(retain, nonatomic) KTVChorusListNetHelper *netHelper; // @synthesize netHelper=_netHelper;
@property(nonatomic) _Bool isAcceptReqesting; // @synthesize isAcceptReqesting=_isAcceptReqesting;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) KTVOpusInfo *baseOpusInfo; // @synthesize baseOpusInfo=_baseOpusInfo;
- (void).cxx_destruct;
- (void)unTopChorusAccWithIndex:(long long)arg1 commplete:(CDUnknownBlockType)arg2;
- (void)topChorusAccWithIndex:(long long)arg1 commplete:(CDUnknownBlockType)arg2;
- (void)deleteChorusAccAtIndex:(long long)arg1 commplete:(CDUnknownBlockType)arg2;
- (id)opusItemOfChorusListAtIndex:(long long)arg1;
- (long long)numberOfChorusAcc;
- (void)loadMore;
- (void)update;
- (id)initWithOpusInfo:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGScrollManagerViewController.h"

@class EQDownloadModel;

@interface KGEQDetailManagerViewController : KGScrollManagerViewController
{
    unsigned long long _defaultIndex;
    CDUnknownBlockType _leavedBlock;
    EQDownloadModel *_eqInfo;
    unsigned long long _totalCommentCount;
}

@property(nonatomic) unsigned long long totalCommentCount; // @synthesize totalCommentCount=_totalCommentCount;
@property(retain, nonatomic) EQDownloadModel *eqInfo; // @synthesize eqInfo=_eqInfo;
@property(copy, nonatomic) CDUnknownBlockType leavedBlock; // @synthesize leavedBlock=_leavedBlock;
@property(nonatomic) unsigned long long defaultIndex; // @synthesize defaultIndex=_defaultIndex;
- (void).cxx_destruct;
- (void)KGUsingControllerState:(int)arg1;
- (id)createCommentVC;
- (void)backgroundAndTopViewColorInit;
- (void)createUI;
- (void)viewDidLoad;
- (id)initWithEQInfo:(id)arg1;

@end

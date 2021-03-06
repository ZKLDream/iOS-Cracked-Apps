//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

#import "FBHScrollImpressionLogging-Protocol.h"

@class CKComponent, FBSearchComponentModel, FBSearchResultsContext;

@interface FBSearchResultsMixedMediaModuleChildComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    CKTypedComponentAction_4b39899e _tapHandler;
    FBSearchResultsContext *_context;
    FBSearchComponentModel *_mediaEdgeModel;
    CKComponent *_mediaComponent;
}

+ (id)newWithMediaEdgeModel:(id)arg1 context:(id)arg2 tapHandler:(CKTypedComponentAction_4b39899e)arg3 size:(const struct CKComponentSize *)arg4;
@property(readonly, nonatomic) CKComponent *mediaComponent; // @synthesize mediaComponent=_mediaComponent;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)videoPlayerController;
- (void)didTapPhoto;

@end


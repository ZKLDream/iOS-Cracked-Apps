//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBGroupToolbox, FBMemGroup;

@interface FBGroupFeedHeaderComponent : CKCompositeComponent
{
    FBMemGroup *_group;
    FBGroupToolbox *_toolbox;
}

+ (id)newWithGroup:(id)arg1 toolbox:(id)arg2;
+ (id)initialState;
@property(readonly, nonatomic) FBGroupToolbox *toolbox; // @synthesize toolbox=_toolbox;
@property(readonly, nonatomic) FBMemGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (void)didTapCoverPhoto:(id)arg1;
- (void)didTapOnParentGroup:(id)arg1;

@end


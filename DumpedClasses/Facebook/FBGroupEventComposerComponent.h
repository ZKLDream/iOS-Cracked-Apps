//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBMemGroup, FBSectionComponentToolbox;

@interface FBGroupEventComposerComponent : CKCompositeComponent
{
    FBMemGroup *_group;
    FBSectionComponentToolbox *_toolbox;
}

+ (id)newWithPerson:(id)arg1 group:(id)arg2 toolbox:(id)arg3;
@property(readonly, nonatomic) FBSectionComponentToolbox *toolbox; // @synthesize toolbox=_toolbox;
@property(readonly, nonatomic) FBMemGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;

@end


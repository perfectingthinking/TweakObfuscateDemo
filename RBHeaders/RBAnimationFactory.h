//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RBAnimationFactory : NSObject
{
}

+ (void)animationDelete:(id)arg1;
+ (id)createBoundAnimWithX:(_Bool)arg1 Y:(_Bool)arg2 delay:(double)arg3 duration:(double)arg4;
+ (id)createAnimHereWithDuration:(double)arg1 Y:(double)arg2 repeatCount:(int)arg3;
+ (id)createScaleAnimWithFromValue:(double)arg1 toValue:(double)arg2 X:(_Bool)arg3 Y:(_Bool)arg4 delay:(double)arg5 duration:(double)arg6;
+ (id)createPositionAnimWithFromValue:(struct CGPoint)arg1 toValue:(struct CGPoint)arg2 delay:(double)arg3 duration:(double)arg4;
+ (id)createPositionYAnimWithFromValue:(double)arg1 toValue:(double)arg2 delay:(double)arg3 duration:(double)arg4;
+ (id)createPositionXAnimWithFromValue:(double)arg1 toValue:(double)arg2 delay:(double)arg3 duration:(double)arg4;
+ (id)createFadeAnimWithFromValue:(double)arg1 toValue:(double)arg2 delay:(double)arg3 duration:(double)arg4;
+ (id)createAnimWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3 delay:(double)arg4 duration:(double)arg5;

@end

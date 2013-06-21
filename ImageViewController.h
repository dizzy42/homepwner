//
//  ImageViewController.h
//  Homepwner
//
//  Created by Timothy Payton on 6/20/13.
//  Copyright (c) 2013 Timothy Payton. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageViewController : UIViewController
{

    __weak IBOutlet UIScrollView *scrollView;
    __weak IBOutlet UIImageView *imageView;
}

@property (nonatomic, strong) UIImage *image;
@end
